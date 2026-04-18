-- Write your query below
SELECT student_id, exam_id, score
FROM exam_results e1
WHERE (student_id, score, exam_id) = (
    SELECT student_id, score, exam_id
    FROM exam_results e2
    WHERE e1.student_id = e2.student_id
    ORDER BY score DESC, exam_id ASC
    LIMIT 1
)
ORDER BY student_id;